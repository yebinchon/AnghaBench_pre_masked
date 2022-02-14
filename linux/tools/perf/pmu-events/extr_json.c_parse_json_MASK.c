
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsmntok_t ;
typedef scalar_t__ jsmnerr_t ;
struct TYPE_4__ {int toknext; } ;
typedef TYPE_1__ jsmn_parser ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,size_t,int *,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (unsigned int) ;
 char* FUNC_5 (char const*,size_t*) ;
 int FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (char*,size_t) ;

jsmntok_t *FUNC_8(const char *VAR_1, char **VAR_2, size_t *VAR_3, int *VAR_4)
{
 jsmn_parser VAR_5;
 jsmntok_t *VAR_6;
 jsmnerr_t VAR_7;
 unsigned VAR_8;

 *VAR_2 = FUNC_5(VAR_1, VAR_3);
 if (!*VAR_2)
  return ((void*)0);

 VAR_8 = *VAR_3 * 16;
 VAR_6 = FUNC_4(VAR_8);
 if (!VAR_6)
  goto error;
 FUNC_1(&VAR_5);
 VAR_7 = FUNC_2(&VAR_5, *VAR_2, *VAR_3, VAR_6,
    VAR_8 / sizeof(jsmntok_t));
 if (VAR_7 != VAR_0) {
  FUNC_6("%s: json error %s\n", VAR_1, FUNC_3(VAR_7));
  goto error_free;
 }
 if (VAR_4)
  *VAR_4 = VAR_5.toknext;
 return VAR_6;
error_free:
 FUNC_0(VAR_6);
error:
 FUNC_7(*VAR_2, *VAR_3);
 return ((void*)0);
}
