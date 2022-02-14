
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_data {int member_1; int member_2; scalar_t__ hit_nul; scalar_t__ is_printable; int member_0; } ;
struct perf_sample {unsigned int raw_size; scalar_t__ raw_data; } ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,unsigned int,int,int ,struct printer_data*,int *) ;
 scalar_t__ FUNC_1 (int *,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct perf_sample *VAR_1, FILE *VAR_2)
{
 unsigned int VAR_3 = VAR_1->raw_size;
 struct printer_data VAR_4 = {0, 0, 1};
 int VAR_5 = FUNC_0(VAR_1->raw_data, VAR_3, 8,
          VAR_0, &VAR_4, VAR_2);

 if (VAR_4.is_printable && VAR_4.hit_nul)
  VAR_5 += FUNC_1(VAR_2, "%17s \"%s\"\n", "BPF string:", (char *)(VAR_1->raw_data));

 return VAR_5;
}
