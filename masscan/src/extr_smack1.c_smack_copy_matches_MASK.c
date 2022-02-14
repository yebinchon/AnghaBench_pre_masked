
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackMatches {size_t* m_ids; unsigned int m_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (size_t*,unsigned int,size_t const) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(
    struct SmackMatches *VAR_1,
    const size_t *VAR_2,
    unsigned VAR_3)
{
    size_t *VAR_4;
    unsigned VAR_5;
    size_t *VAR_6 = VAR_1->m_ids;
    unsigned VAR_7 = VAR_1->m_count;
    unsigned VAR_8;


    VAR_4 = (size_t *)FUNC_4((VAR_7 + VAR_3)*sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }


    for (VAR_8=0; VAR_8<VAR_7; VAR_8++)
        VAR_4[VAR_8] = VAR_6[VAR_8];
    VAR_5 = VAR_7;


    for (VAR_8=0; VAR_8<VAR_3; VAR_8++) {
        if (!FUNC_3(VAR_6, VAR_7, VAR_2[VAR_8]))
            VAR_4[VAR_5++] = VAR_2[VAR_8];
    }


    if (VAR_1->m_ids) {
        FUNC_2(VAR_1->m_ids);
    }


    VAR_1->m_ids = VAR_4;
    VAR_1->m_count = VAR_5;
}
