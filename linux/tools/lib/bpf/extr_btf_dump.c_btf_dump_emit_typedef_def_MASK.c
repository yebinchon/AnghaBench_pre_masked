
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int type; } ;
struct btf_dump {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct btf_dump*,int ,char const*,int) ;
 char* FUNC_1 (struct btf_dump*,int ) ;
 int FUNC_2 (struct btf_dump*,char*) ;

__attribute__((used)) static void FUNC_3(struct btf_dump *VAR_0, __u32 VAR_1,
         const struct btf_type *VAR_2, int VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_0, "typedef ");
 FUNC_0(VAR_0, VAR_2->type, VAR_4, VAR_3);
}
