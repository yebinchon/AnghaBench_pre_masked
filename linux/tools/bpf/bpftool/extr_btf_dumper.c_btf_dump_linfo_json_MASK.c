
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int dummy; } ;
struct bpf_line_info {int line_col; int file_name_off; int line_off; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (struct btf const*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,char*,char const*) ;
 char const* FUNC_5 (char const*) ;

void FUNC_6(const struct btf *VAR_1,
    const struct bpf_line_info *VAR_2, bool VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_1, VAR_2->line_off);

 if (VAR_4)
  FUNC_4(VAR_0, "src", FUNC_5(VAR_4));

 if (VAR_3) {
  const char *VAR_5 = FUNC_2(VAR_1, VAR_2->file_name_off);

  if (VAR_5)
   FUNC_4(VAR_0, "file", VAR_5);

  if (FUNC_1(VAR_2->line_col))
   FUNC_3(VAR_0, "line_num",
     FUNC_1(VAR_2->line_col));

  if (FUNC_0(VAR_2->line_col))
   FUNC_3(VAR_0, "line_col",
     FUNC_0(VAR_2->line_col));
 }
}
