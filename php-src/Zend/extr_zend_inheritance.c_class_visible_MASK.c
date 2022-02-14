
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int filename; } ;
struct TYPE_6__ {TYPE_1__ user; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ info; } ;
typedef TYPE_3__ zend_class_entry ;
typedef int zend_bool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static zend_bool FUNC_2(zend_class_entry *VAR_6) {
 if (VAR_6->type == VAR_2) {
  return !(FUNC_0(VAR_5) & VAR_0);
 } else {
  FUNC_1(VAR_6->type == VAR_3);
  return !(FUNC_0(VAR_5) & VAR_1)
   || VAR_6->info.user.filename == FUNC_0(VAR_4);
 }
}
