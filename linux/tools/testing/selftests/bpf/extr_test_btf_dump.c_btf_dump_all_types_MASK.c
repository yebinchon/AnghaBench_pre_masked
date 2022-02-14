
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dump_opts {int dummy; } ;
struct btf_dump {int dummy; } ;
struct btf {int dummy; } ;


 scalar_t__ FUNC_0 (struct btf_dump*) ;
 int FUNC_1 (struct btf_dump*) ;
 size_t FUNC_2 (struct btf const*) ;
 int FUNC_3 (struct btf_dump*,int) ;
 int FUNC_4 (struct btf_dump*) ;
 struct btf_dump* FUNC_5 (struct btf const*,int *,struct btf_dump_opts const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(const struct btf *VAR_1,
         const struct btf_dump_opts *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_1);
 struct btf_dump *VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_4 = FUNC_5(VAR_1, ((void*)0), VAR_2, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 for (VAR_6 = 1; VAR_6 <= VAR_3; VAR_6++) {
  VAR_5 = FUNC_3(VAR_4, VAR_6);
  if (VAR_5)
   goto done;
 }

done:
 FUNC_4(VAR_4);
 return VAR_5;
}
