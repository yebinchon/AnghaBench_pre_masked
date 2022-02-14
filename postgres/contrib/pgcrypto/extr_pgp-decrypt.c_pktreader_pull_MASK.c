
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct PktData {int type; int len; } ;
typedef int PullFilter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,int **) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, PullFilter *VAR_3, int VAR_4,
      uint8 **VAR_5, uint8 *VAR_6, int VAR_7)
{
 int VAR_8;
 struct PktData *VAR_9 = VAR_2;


 if (VAR_9->type == VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 while (VAR_9->len == 0)
 {

  if (VAR_9->type == VAR_1)
   return 0;


  VAR_8 = FUNC_0(VAR_3, &VAR_9->len);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_9->type = VAR_8;
 }

 if (VAR_4 > VAR_9->len)
  VAR_4 = VAR_9->len;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_8 > 0)
  VAR_9->len -= VAR_8;

 return VAR_8;
}
