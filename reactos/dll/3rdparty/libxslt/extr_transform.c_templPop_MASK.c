
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef scalar_t__ xsltTemplatePtr ;
struct TYPE_3__ {int templNr; scalar_t__* templTab; scalar_t__ templ; } ;



__attribute__((used)) static xsltTemplatePtr
FUNC_0(xsltTransformContextPtr VAR_0)
{
    xsltTemplatePtr VAR_1;

    if (VAR_0->templNr <= 0)
        return (0);
    VAR_0->templNr--;
    if (VAR_0->templNr > 0)
        VAR_0->templ = VAR_0->templTab[VAR_0->templNr - 1];
    else
        VAR_0->templ = (xsltTemplatePtr) 0;
    VAR_1 = VAR_0->templTab[VAR_0->templNr];
    VAR_0->templTab[VAR_0->templNr] = 0;
    return (VAR_1);
}
