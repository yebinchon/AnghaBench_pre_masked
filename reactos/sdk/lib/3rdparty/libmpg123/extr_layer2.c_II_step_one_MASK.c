
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct al_table {int bits; } ;
struct TYPE_5__ {int stereo; int II_sblimit; int jsbound; struct al_table* alloc; } ;
typedef TYPE_1__ mpg123_handle ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(unsigned int *VAR_0,int *VAR_1,mpg123_handle *VAR_2)
{
 int VAR_3 = VAR_2->stereo-1;
 int VAR_4 = VAR_2->II_sblimit;
 int VAR_5 = VAR_2->jsbound;
 int VAR_6 = VAR_2->II_sblimit<<VAR_3;
 const struct al_table *VAR_7 = VAR_2->alloc;
 int VAR_8;
 unsigned int VAR_9[64];
 unsigned int *VAR_10,*VAR_11;
 int VAR_12,VAR_13;

 VAR_11 = VAR_0;
 if(VAR_3)
 {
  for(VAR_8=VAR_5;VAR_8;VAR_8--,VAR_7+=(1<<VAR_13))
  {
   VAR_13=VAR_7->bits;
   *VAR_11++ = (char) FUNC_0(VAR_2, VAR_13);
   *VAR_11++ = (char) FUNC_0(VAR_2, VAR_13);
  }
  for(VAR_8=VAR_4-VAR_5;VAR_8;VAR_8--,VAR_7+=(1<<VAR_13))
  {
   VAR_13=VAR_7->bits;
   VAR_11[0] = (char) FUNC_0(VAR_2, VAR_13);
   VAR_11[1] = VAR_11[0];
   VAR_11+=2;
  }
  VAR_11 = VAR_0;
  VAR_10=VAR_9;

  for(VAR_8=VAR_6;VAR_8;VAR_8--)
  if(*VAR_11++) *VAR_10++ = (char) FUNC_1(VAR_2, 2);
 }
 else
 {
  for(VAR_8=VAR_4;VAR_8;VAR_8--,VAR_7+=(1<<VAR_13))
  {
   VAR_13=VAR_7->bits;
   *VAR_11++ = (char) FUNC_0(VAR_2, VAR_13);
  }
  VAR_11 = VAR_0;
  VAR_10=VAR_9;
  for(VAR_8=VAR_4;VAR_8;VAR_8--)
  if(*VAR_11++) *VAR_10++ = (char) FUNC_1(VAR_2, 2);
 }

 VAR_11 = VAR_0;
 VAR_10=VAR_9;
 for(VAR_8=VAR_6;VAR_8;VAR_8--)
 if(*VAR_11++)
 switch(*VAR_10++)
 {
  case 0:
   *VAR_1++ = FUNC_1(VAR_2, 6);
   *VAR_1++ = FUNC_1(VAR_2, 6);
   *VAR_1++ = FUNC_1(VAR_2, 6);
  break;
  case 1 :
   *VAR_1++ = VAR_12 = FUNC_1(VAR_2, 6);
   *VAR_1++ = VAR_12;
   *VAR_1++ = FUNC_1(VAR_2, 6);
  break;
  case 2:
   *VAR_1++ = VAR_12 = FUNC_1(VAR_2, 6);
   *VAR_1++ = VAR_12;
   *VAR_1++ = VAR_12;
  break;
  default:
   *VAR_1++ = FUNC_1(VAR_2, 6);
   *VAR_1++ = VAR_12 = FUNC_1(VAR_2, 6);
   *VAR_1++ = VAR_12;
  break;
 }
}
