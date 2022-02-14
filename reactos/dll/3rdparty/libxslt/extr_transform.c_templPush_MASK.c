
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef void* xsltTemplatePtr ;
struct TYPE_3__ {int templMax; void** templTab; int templNr; void* templ; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void**,int) ;

__attribute__((used)) static int
FUNC_3(xsltTransformContextPtr VAR_1, xsltTemplatePtr VAR_2)
{
    if (VAR_1->templMax == 0) {
        VAR_1->templMax = 4;
        VAR_1->templTab =
            (xsltTemplatePtr *) FUNC_1(VAR_1->templMax *
                                          sizeof(VAR_1->templTab[0]));
        if (VAR_1->templTab == ((void*)0)) {
            FUNC_0(VAR_0, "malloc failed !\n");
            return (0);
        }
    }
    else if (VAR_1->templNr >= VAR_1->templMax) {
        VAR_1->templMax *= 2;
        VAR_1->templTab =
            (xsltTemplatePtr *) FUNC_2(VAR_1->templTab,
                                           VAR_1->templMax *
                                           sizeof(VAR_1->templTab[0]));
        if (VAR_1->templTab == ((void*)0)) {
            FUNC_0(VAR_0, "realloc failed !\n");
            return (0);
        }
    }
    VAR_1->templTab[VAR_1->templNr] = VAR_2;
    VAR_1->templ = VAR_2;
    return (VAR_1->templNr++);
}
