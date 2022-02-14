
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_3__ {struct file* file; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct TYPE_4__ {scalar_t__ checkreqprot; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,unsigned long,int) ;
 int FUNC_3 (int ,int ,int ,struct common_audit_data*) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, unsigned long VAR_6,
        unsigned long VAR_7, unsigned long VAR_8)
{
 struct common_audit_data VAR_9;
 int VAR_10;

 if (VAR_5) {
  VAR_9.type = VAR_1;
  VAR_9.u.file = VAR_5;
  VAR_10 = FUNC_3(FUNC_0(), FUNC_1(VAR_5),
        VAR_0, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_4.checkreqprot)
  VAR_7 = VAR_6;

 return FUNC_2(VAR_5, VAR_7,
       (VAR_8 & VAR_3) == VAR_2);
}
