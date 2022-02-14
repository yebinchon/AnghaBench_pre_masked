
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int *,double,double,double,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(void)
{

 FUNC_0("pg_trgm.similarity_threshold",
        "Sets the threshold used by the % operator.",
        "Valid range is 0.0 .. 1.0.",
        &VAR_1,
        0.3,
        0.0,
        1.0,
        VAR_0,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));
 FUNC_0("pg_trgm.word_similarity_threshold",
        "Sets the threshold used by the <% operator.",
        "Valid range is 0.0 .. 1.0.",
        &VAR_3,
        0.6,
        0.0,
        1.0,
        VAR_0,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));
 FUNC_0("pg_trgm.strict_word_similarity_threshold",
        "Sets the threshold used by the <<% operator.",
        "Valid range is 0.0 .. 1.0.",
        &VAR_2,
        0.5,
        0.0,
        1.0,
        VAR_0,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));
}
