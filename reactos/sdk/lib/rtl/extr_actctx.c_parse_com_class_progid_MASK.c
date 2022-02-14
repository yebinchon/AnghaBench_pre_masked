
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct entity {int dummy; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct entity*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(xmlbuf_t* VAR_3, struct entity *VAR_4)
{
    xmlstr_t VAR_5;
    BOOL VAR_6 = VAR_0;

    if (!FUNC_2(VAR_3, &VAR_6) || VAR_6 || !FUNC_3(VAR_3, &VAR_5))
        return VAR_0;

    if (!FUNC_0(&VAR_5, VAR_4)) return VAR_0;
    return FUNC_1(VAR_3, VAR_2, VAR_1);
}
