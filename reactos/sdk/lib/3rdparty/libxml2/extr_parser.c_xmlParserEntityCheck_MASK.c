
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef TYPE_4__* xmlEntityPtr ;
typedef int xmlChar ;
struct TYPE_12__ {scalar_t__ etype; int checked; scalar_t__* content; } ;
struct TYPE_10__ {scalar_t__ code; } ;
struct TYPE_11__ {int options; scalar_t__ errNo; unsigned long nbentities; TYPE_2__ lastError; scalar_t__ sizeentities; TYPE_1__* input; int depth; } ;
struct TYPE_9__ {size_t consumed; size_t cur; size_t base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char) ;
 int * FUNC_3 (TYPE_3__*,scalar_t__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(xmlParserCtxtPtr VAR_9, size_t VAR_10,
                     xmlEntityPtr VAR_11, size_t VAR_12)
{
    size_t VAR_13 = 0;

    if ((VAR_9 == ((void*)0)) || (VAR_9->options & VAR_6))
        return (0);
    if (VAR_9->lastError.code == VAR_0)
        return (1);





    if ((VAR_11 != ((void*)0)) && (VAR_11->etype != VAR_2) &&
 (VAR_11->content != ((void*)0)) && (VAR_11->checked == 0) &&
 (VAR_9->errNo != VAR_0)) {
 unsigned long VAR_14 = VAR_9->nbentities;
 xmlChar *VAR_15;

 VAR_11->checked = 1;

        ++VAR_9->depth;
 VAR_15 = FUNC_3(VAR_9, VAR_11->content,
      VAR_7, 0, 0, 0);
        --VAR_9->depth;
 if ((VAR_15 == ((void*)0)) || (VAR_9->errNo == VAR_0)) {
     VAR_11->content[0] = 0;
 }

 VAR_11->checked = (VAR_9->nbentities - VAR_14 + 1) * 2;
 if (VAR_15 != ((void*)0)) {
     if (FUNC_2(VAR_15, '<'))
  VAR_11->checked |= 1;
     FUNC_1(VAR_15);
     VAR_15 = ((void*)0);
 }
    }
    if (VAR_12 != 0) {
 if (VAR_12 < VAR_3)
     return(0);






        if (VAR_9->input != ((void*)0)) {
     VAR_13 = VAR_9->input->consumed +
                (VAR_9->input->cur - VAR_9->input->base);
 }
        VAR_13 += VAR_9->sizeentities;

        if (VAR_12 < VAR_5 * VAR_13)
     return(0);
    } else if (VAR_10 != 0) {



        if (VAR_10 < VAR_4)
     return(0);




        if (VAR_9->input != ((void*)0)) {
            VAR_13 = VAR_9->input->consumed +
                (VAR_9->input->cur - VAR_9->input->base);
        }
        VAR_13 += VAR_9->sizeentities;

        if ((VAR_10 < VAR_5 * VAR_13) &&
     (VAR_9->nbentities * 3 < VAR_5 * VAR_13))
            return (0);
    } else if (VAR_11 != ((void*)0)) {



        VAR_10 = VAR_11->checked / 2;




        if (VAR_9->input != ((void*)0)) {
            VAR_13 = VAR_9->input->consumed +
                (VAR_9->input->cur - VAR_9->input->base);
        }
        VAR_13 += VAR_9->sizeentities;





        if (VAR_10 * 3 < VAR_13 * VAR_5)
            return (0);
    } else {



 if (((VAR_9->lastError.code != VAR_1) &&
      (VAR_9->lastError.code != VAR_8)) ||
     (VAR_9->nbentities <= 10000))
     return (0);
    }
    FUNC_0(VAR_9, VAR_0, ((void*)0));
    return (1);
}
