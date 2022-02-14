
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_7__ {int rrdset_root_index_name; } ;
struct TYPE_6__ {char const* name; char* id; int magic; int avlname; scalar_t__ hash_name; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,char const*,char*,char const*) ;
 TYPE_1__* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static inline RRDSET *FUNC_5(RRDHOST *VAR_1, const char *VAR_2, uint32_t VAR_3) {
    void *VAR_4 = ((void*)0);
    RRDSET VAR_5;
    VAR_5.name = VAR_2;
    VAR_5.hash_name = (VAR_3)?VAR_3:FUNC_3(VAR_5.name);


    VAR_4 = FUNC_0(&VAR_1->rrdset_root_index_name, (avl *) (&(VAR_5.avlname)));
    if(VAR_4) {
        RRDSET *VAR_6 = FUNC_2(VAR_4);
        if(FUNC_4(VAR_6->magic, VAR_0) != 0)
            FUNC_1("Search for RRDSET %s returned an invalid RRDSET %s (name %s)", VAR_2, VAR_6->id, VAR_6->name);


        return FUNC_2(VAR_4);
    }

    return ((void*)0);
}
