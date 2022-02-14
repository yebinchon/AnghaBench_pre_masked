
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smack_known {int dummy; } ;
struct file {scalar_t__ f_security; } ;
struct TYPE_2__ {scalar_t__ lbs_file; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline struct smack_known **FUNC_0(const struct file *VAR_1)
{
 return (struct smack_known **)(VAR_1->f_security +
           VAR_0.lbs_file);
}
