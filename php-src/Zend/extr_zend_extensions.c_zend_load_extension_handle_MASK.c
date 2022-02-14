
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zend_extension_api_no; char* build_id; } ;
typedef TYPE_1__ zend_extension_version_info ;
struct TYPE_5__ {scalar_t__ (* api_no_check ) (scalar_t__) ;char* name; char* author; char* URL; scalar_t__ (* build_id_check ) (char*) ;} ;
typedef TYPE_2__ zend_extension ;
typedef int DL_HANDLE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

int FUNC_9(DL_HANDLE VAR_5, const char *VAR_6)
{
 FUNC_3(VAR_4, "Extensions are not supported on this platform.\n");




 return VAR_0;

}
