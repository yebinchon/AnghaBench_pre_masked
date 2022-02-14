
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cmsContext_struct {void** chunks; } ;
typedef int cmsContext ;
typedef size_t _cmsMemoryClient ;
struct TYPE_2__ {void** chunks; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct _cmsContext_struct* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;
 TYPE_1__ VAR_3 ;

void* FUNC_3(cmsContext VAR_4, _cmsMemoryClient VAR_5)
{
    struct _cmsContext_struct* VAR_6;
    void *VAR_7;

    if ((int) VAR_5 < 0 || VAR_5 >= VAR_0) {

           FUNC_2(VAR_4, VAR_2, "Bad context client -- possible corruption");


           FUNC_0(0);


           return VAR_3.chunks[VAR_1];
    }

    VAR_6 = FUNC_1(VAR_4);
    VAR_7 = VAR_6 ->chunks[VAR_5];

    if (VAR_7 != ((void*)0))
        return VAR_7;



    return VAR_3.chunks[VAR_5];
}
