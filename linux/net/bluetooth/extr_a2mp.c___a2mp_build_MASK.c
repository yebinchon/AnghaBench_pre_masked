
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct a2mp_cmd {int data; int len; void* ident; void* code; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct a2mp_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static struct a2mp_cmd *FUNC_3(u8 VAR_1, u8 VAR_2, u16 VAR_3, void *VAR_4)
{
 struct a2mp_cmd *VAR_5;
 int VAR_6;

 VAR_6 = sizeof(*VAR_5) + VAR_3;
 VAR_5 = FUNC_1(VAR_6, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->code = VAR_1;
 VAR_5->ident = VAR_2;
 VAR_5->len = FUNC_0(VAR_3);

 FUNC_2(VAR_5->data, VAR_4, VAR_3);

 return VAR_5;
}
