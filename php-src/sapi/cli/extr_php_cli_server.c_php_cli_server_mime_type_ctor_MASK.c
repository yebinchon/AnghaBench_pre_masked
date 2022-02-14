
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mime_type; scalar_t__ ext; } ;
typedef TYPE_1__ php_cli_server_ext_mime_type_pair ;
struct TYPE_6__ {int extension_mime_types; } ;
typedef TYPE_2__ php_cli_server ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int *,int *,int) ;
 int FUNC_2 (int *,scalar_t__,size_t,void*) ;

__attribute__((used)) static int FUNC_3(php_cli_server *VAR_1, const php_cli_server_ext_mime_type_pair *VAR_2)
{
 const php_cli_server_ext_mime_type_pair *VAR_3;

 FUNC_1(&VAR_1->extension_mime_types, 0, ((void*)0), ((void*)0), 1);

 for (VAR_3 = VAR_2; VAR_3->ext; VAR_3++) {
  size_t VAR_4 = FUNC_0(VAR_3->ext);
  FUNC_2(&VAR_1->extension_mime_types, VAR_3->ext, VAR_4, (void*)VAR_3->mime_type);
 }

 return VAR_0;
}
