
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,char const*,size_t,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t,char const*,size_t,int*) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(u8 VAR_3, const char *VAR_4, u8 VAR_5, int VAR_6,
       int *VAR_7)
{
 int VAR_8, VAR_9 = -1;

 FUNC_1(&VAR_2[VAR_3].mutex);
 if (VAR_6 == 1)
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_9);
 else
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_9);
 FUNC_2(&VAR_2[VAR_3].mutex);


 if (VAR_9 == -1) {
  *VAR_7 = -VAR_0;
  return 0;
 }

 *VAR_7 = VAR_9;
 if (!VAR_8)
  *VAR_7 = -VAR_1;
 return 1;
}
