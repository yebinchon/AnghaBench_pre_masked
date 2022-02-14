
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nf_ct_ftp_master {unsigned int* seq_aft_nl_num; scalar_t__** seq_aft_nl; } ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, const struct nf_ct_ftp_master *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->seq_aft_nl_num[VAR_2]; VAR_3++)
  if (VAR_1->seq_aft_nl[VAR_2][VAR_3] == VAR_0)
   return 1;
 return 0;
}
