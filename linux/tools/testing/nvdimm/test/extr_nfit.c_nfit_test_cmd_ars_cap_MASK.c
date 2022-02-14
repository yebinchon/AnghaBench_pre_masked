
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_cmd_ars_status {int dummy; } ;
struct nd_cmd_ars_cap {int max_ars_out; int status; int clear_err_unit; } ;
struct nd_ars_record {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct nd_cmd_ars_cap *VAR_5,
  unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 < sizeof(*VAR_5))
  return -VAR_0;


 VAR_7 = VAR_4 / sizeof(struct nd_ars_record);

 VAR_5->max_ars_out = sizeof(struct nd_cmd_ars_status)
  + VAR_7 * sizeof(struct nd_ars_record);
 VAR_5->status = (VAR_1 | VAR_2) << 16;
 VAR_5->clear_err_unit = VAR_3;

 return 0;
}
