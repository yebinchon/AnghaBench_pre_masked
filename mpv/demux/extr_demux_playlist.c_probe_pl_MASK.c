
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl_parser {int force; int s; } ;
struct pl_format {scalar_t__ (* parse ) (struct pl_parser*) ;int mime_types; } ;
typedef int int64_t ;


 int FUNC_0 (struct pl_format*) ;
 int FUNC_1 (struct pl_parser*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct pl_format* VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pl_parser*) ;

__attribute__((used)) static const struct pl_format *FUNC_6(struct pl_parser *VAR_1)
{
    int64_t VAR_2 = FUNC_4(VAR_1->s);
    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        const struct pl_format *VAR_4 = &VAR_0[VAR_3];
        FUNC_3(VAR_1->s, VAR_2);
        if (FUNC_2(VAR_1->s, VAR_4->mime_types)) {
            FUNC_1(VAR_1, "forcing format by mime-type.\n");
            VAR_1->force = 1;
            return VAR_4;
        }
        if (VAR_4->parse(VAR_1) >= 0)
            return VAR_4;
    }
    return ((void*)0);
}
