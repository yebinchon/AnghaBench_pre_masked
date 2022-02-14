
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handle; scalar_t__ (* reader ) (int ,char*,int) ;} ;
struct TYPE_6__ {TYPE_1__ stream; } ;
struct TYPE_7__ {TYPE_2__ handle; } ;
typedef TYPE_3__ zend_file_handle ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(zend_file_handle *VAR_1)
{
 char VAR_2;

 if (VAR_1->handle.stream.reader(VAR_1->handle.stream.handle, &VAR_2, sizeof(VAR_2))) {
  return (int)VAR_2;
 }
 return VAR_0;
}
