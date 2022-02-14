
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltAttrVTPtr ;
typedef int xsltAttrVT ;
struct TYPE_5__ {int nb_seg; int max_seg; void** segments; } ;


 int VAR_0 ;
 int FUNC_0 (void**,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static xsltAttrVTPtr
FUNC_2(xsltAttrVTPtr VAR_1, void *VAR_2) {
    if (VAR_1->nb_seg >= VAR_1->max_seg) {
 VAR_1 = (xsltAttrVTPtr) FUNC_1(VAR_1, sizeof(xsltAttrVT) +
   VAR_1->max_seg * sizeof(void *));
 if (VAR_1 == ((void*)0)) {
     return ((void*)0);
 }
 FUNC_0(&VAR_1->segments[VAR_1->nb_seg], 0, VAR_0*sizeof(void *));
 VAR_1->max_seg += VAR_0;
    }
    VAR_1->segments[VAR_1->nb_seg++] = VAR_2;
    return VAR_1;
}
