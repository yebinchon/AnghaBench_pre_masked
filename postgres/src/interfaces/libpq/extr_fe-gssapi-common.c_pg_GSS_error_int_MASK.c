
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int PQExpBuffer ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int,int ,scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PQExpBuffer VAR_1, const char *VAR_2,
     OM_uint32 VAR_3, int VAR_4)
{
 OM_uint32 VAR_5;
 gss_buffer_desc VAR_6;
 OM_uint32 VAR_7 = 0;

 do
 {
  FUNC_1(&VAR_5, VAR_3, VAR_4,
         VAR_0, &VAR_7, &VAR_6);
  FUNC_0(VAR_1, "%s: %s\n", VAR_2, (char *) VAR_6.value);
  FUNC_2(&VAR_5, &VAR_6);
 } while (VAR_7);
}
