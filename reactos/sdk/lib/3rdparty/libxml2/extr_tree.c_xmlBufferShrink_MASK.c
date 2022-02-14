
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_3__ {unsigned int use; scalar_t__ alloc; size_t size; scalar_t__* content; scalar_t__* contentIO; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,unsigned int) ;

int
FUNC_1(xmlBufferPtr VAR_2, unsigned int VAR_3) {
    if (VAR_2 == ((void*)0)) return(-1);
    if (VAR_3 == 0) return(0);
    if (VAR_3 > VAR_2->use) return(-1);

    VAR_2->use -= VAR_3;
    if ((VAR_2->alloc == VAR_0) ||
        ((VAR_2->alloc == VAR_1) && (VAR_2->contentIO != ((void*)0)))) {




        VAR_2->content += VAR_3;
 VAR_2->size -= VAR_3;





 if ((VAR_2->alloc == VAR_1) && (VAR_2->contentIO != ((void*)0))) {
     size_t VAR_4 = VAR_2->content - VAR_2->contentIO;
     if (VAR_4 >= VAR_2->size) {
  FUNC_0(VAR_2->contentIO, &VAR_2->content[0], VAR_2->use);
  VAR_2->content = VAR_2->contentIO;
  VAR_2->content[VAR_2->use] = 0;
  VAR_2->size += VAR_4;
     }
 }
    } else {
 FUNC_0(VAR_2->content, &VAR_2->content[VAR_3], VAR_2->use);
 VAR_2->content[VAR_2->use] = 0;
    }
    return(VAR_3);
}
