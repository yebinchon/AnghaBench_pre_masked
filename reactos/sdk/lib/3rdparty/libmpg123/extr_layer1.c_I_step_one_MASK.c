
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stereo; int jsbound; } ;
typedef TYPE_1__ mpg123_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int*,unsigned int*) ;
 void* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1[], unsigned int VAR_2[2][VAR_0],mpg123_handle *VAR_3)
{
 unsigned int *VAR_4=VAR_1;
 unsigned int *VAR_5 = (unsigned int *) VAR_2;

 if(VAR_3->stereo == 2)
 {
  int VAR_6;
  int VAR_7 = VAR_3->jsbound;
  for(VAR_6=0;VAR_6<VAR_7;VAR_6++)
  {
   *VAR_4++ = FUNC_1(VAR_3, 4);
   *VAR_4++ = FUNC_1(VAR_3, 4);
  }
  for(VAR_6=VAR_7;VAR_6<VAR_0;VAR_6++) *VAR_4++ = FUNC_1(VAR_3, 4);

  if(FUNC_0(VAR_3, VAR_1, VAR_4)) return -1;

  VAR_4 = VAR_1;

  for(VAR_6=0;VAR_6<VAR_7;VAR_6++)
  {
   if ((*VAR_4++))
    *VAR_5++ = FUNC_1(VAR_3, 6);
   if ((*VAR_4++))
    *VAR_5++ = FUNC_1(VAR_3, 6);
  }
  for (VAR_6=VAR_7;VAR_6<VAR_0;VAR_6++)
  if((*VAR_4++))
  {
   *VAR_5++ = FUNC_1(VAR_3, 6);
   *VAR_5++ = FUNC_1(VAR_3, 6);
  }
 }
 else
 {
  int VAR_8;
  for(VAR_8=0;VAR_8<VAR_0;VAR_8++) *VAR_4++ = FUNC_1(VAR_3, 4);

  if(FUNC_0(VAR_3, VAR_1, VAR_4)) return -1;

  VAR_4 = VAR_1;
  for (VAR_8=0;VAR_8<VAR_0;VAR_8++)
  if ((*VAR_4++))
  *VAR_5++ = FUNC_1(VAR_3, 6);
 }

 return 0;
}
