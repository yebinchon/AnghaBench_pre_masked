
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {char* data; int len; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

int
FUNC_8(StringInfo VAR_3)
{
 int32 VAR_4;
 int VAR_5;


 if (FUNC_7(VAR_3))
  return VAR_0;

 if (FUNC_6((char *) &VAR_4, 4))
  return VAR_0;
 FUNC_0(VAR_3, (char *) &VAR_4, 4);

 if (FUNC_6((char *) &VAR_4, 4))
  return VAR_0;
 FUNC_0(VAR_3, (char *) &VAR_4, 4);
 VAR_5 = FUNC_5(VAR_4);

 while (VAR_5-- > 0)
 {
  int VAR_6;


  if (FUNC_6((char *) &VAR_4, 4))
   return VAR_0;
  FUNC_0(VAR_3, (char *) &VAR_4, 4);
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 < -1)
  {

   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("invalid argument size %d in function call message",
       VAR_6)));
  }

  if (VAR_6 > 0)
  {

   FUNC_1(VAR_3, VAR_6);

   if (FUNC_6(VAR_3->data + VAR_3->len, VAR_6))
    return VAR_0;
   VAR_3->len += VAR_6;

   VAR_3->data[VAR_3->len] = '\0';
  }
 }
 return 0;
}
