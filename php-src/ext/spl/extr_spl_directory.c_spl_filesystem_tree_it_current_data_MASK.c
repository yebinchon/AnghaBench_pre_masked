
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_10__ {int file_name_len; int file_name; } ;
typedef TYPE_2__ spl_filesystem_object ;
struct TYPE_9__ {int data; } ;
struct TYPE_11__ {TYPE_1__ intern; int current; } ;
typedef TYPE_3__ spl_filesystem_iterator ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static zval *FUNC_6(zend_object_iterator *VAR_3)
{
 spl_filesystem_iterator *VAR_4 = (spl_filesystem_iterator *)VAR_3;
 spl_filesystem_object *VAR_5 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_5, VAR_1)) {
  if (FUNC_2(VAR_4->current)) {
   FUNC_5(VAR_5);
   FUNC_1(&VAR_4->current, VAR_5->file_name, VAR_5->file_name_len);
  }
  return &VAR_4->current;
 } else if (FUNC_0(VAR_5, VAR_0)) {
  if (FUNC_2(VAR_4->current)) {
   FUNC_5(VAR_5);
   FUNC_4(0, VAR_5, VAR_2, ((void*)0), &VAR_4->current);
  }
  return &VAR_4->current;
 } else {
  return &VAR_4->intern.data;
 }
}
