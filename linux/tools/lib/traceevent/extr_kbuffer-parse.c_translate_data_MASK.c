
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int dummy; } ;





 unsigned long long VAR_0 ;
 int FUNC_0 (struct kbuffer*,void*) ;
 unsigned long long FUNC_1 (struct kbuffer*,unsigned int) ;
 unsigned int FUNC_2 (struct kbuffer*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_3(struct kbuffer *VAR_1, void *VAR_2, void **VAR_3,
        unsigned long long *VAR_4, int *VAR_5)
{
 unsigned long long VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 VAR_2 += 4;

 VAR_8 = FUNC_2(VAR_1, VAR_7);
 *VAR_4 = FUNC_1(VAR_1, VAR_7);

 switch (VAR_8) {
 case 130:
  *VAR_5 = FUNC_0(VAR_1, VAR_2);
  break;

 case 129:
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  VAR_2 += 4;
  VAR_6 <<= VAR_0;
  VAR_6 += *VAR_4;
  *VAR_4 = VAR_6;
  *VAR_5 = 0;
  break;

 case 128:
  VAR_2 += 12;
  *VAR_5 = 0;
  break;
 case 0:
  *VAR_5 = FUNC_0(VAR_1, VAR_2) - 4;
  *VAR_5 = (*VAR_5 + 3) & ~3;
  VAR_2 += 4;
  break;
 default:
  *VAR_5 = VAR_8 * 4;
  break;
 }

 *VAR_3 = VAR_2;

 return VAR_8;
}
