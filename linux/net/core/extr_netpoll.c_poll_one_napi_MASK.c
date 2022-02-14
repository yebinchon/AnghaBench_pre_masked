
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int (* poll ) (struct napi_struct*,int ) ;int state; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int (*) (struct napi_struct*,int )) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct napi_struct*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct napi_struct*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct napi_struct *VAR_1)
{
 int VAR_2;





 if (FUNC_3(VAR_0, &VAR_1->state))
  return;




 VAR_2 = VAR_1->poll(VAR_1, 0);
 FUNC_0(VAR_2, "%pS exceeded budget in poll\n", VAR_1->poll);
 FUNC_4(VAR_1, VAR_2, 0);

 FUNC_1(VAR_0, &VAR_1->state);
}
