
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int * synctex_node_t ;
struct TYPE_4__ {int number_of_lists; int ** lists_of_friends; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (TYPE_1__*,char const*) ;

int FUNC_9(synctex_scanner_t VAR_6,const char * VAR_7,int VAR_8,int VAR_9) {



 int VAR_10 = FUNC_8(VAR_6,VAR_7);
 size_t VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 synctex_node_t VAR_14 = ((void*)0);
 if (VAR_10 == 0) {
  FUNC_5("SyncTeX Warning: No tag for %s\n",VAR_7);
  return -1;
 }
 FUNC_4(VAR_3);
 VAR_1 = VAR_2 = VAR_3 = ((void*)0);
 VAR_13 = VAR_8 < VAR_0-VAR_6->number_of_lists ? VAR_8+VAR_6->number_of_lists:VAR_0;
 while(VAR_8<VAR_13) {

  VAR_12 = (VAR_10+VAR_8)%(VAR_6->number_of_lists);
  if ((VAR_14 = (VAR_6->lists_of_friends)[VAR_12])) {
   do {
    if ((FUNC_7(VAR_14)>=VAR_4)
     && (VAR_10 == FUNC_3(VAR_14))
      && (VAR_8 == FUNC_1(VAR_14))) {
     if (VAR_1 == VAR_2) {
      VAR_11 += 16;
      VAR_2 = FUNC_6(VAR_3,VAR_11*sizeof(synctex_node_t *));
      VAR_1 += VAR_2 - VAR_3;
      VAR_3 = VAR_2;
      VAR_2 = VAR_3 + VAR_11*sizeof(synctex_node_t *);
     }
     *(synctex_node_t *)VAR_1 = VAR_14;
     VAR_1 += sizeof(synctex_node_t);
    }
   } while((VAR_14 = FUNC_0(VAR_14)));
   if (VAR_3 == ((void*)0)) {

    VAR_14 = (VAR_6->lists_of_friends)[VAR_12];
    do {
     if ((FUNC_7(VAR_14)>=VAR_5)
      && (VAR_10 == FUNC_3(VAR_14))
       && (VAR_8 == FUNC_1(VAR_14))) {
      if (VAR_1 == VAR_2) {
       VAR_11 += 16;
       VAR_2 = FUNC_6(VAR_3,VAR_11*sizeof(synctex_node_t *));
       VAR_1 += VAR_2 - VAR_3;
       VAR_3 = VAR_2;
       VAR_2 = VAR_3 + VAR_11*sizeof(synctex_node_t *);
      }
      *(synctex_node_t *)VAR_1 = VAR_14;
      VAR_1 += sizeof(synctex_node_t);
     }
    } while((VAR_14 = FUNC_0(VAR_14)));
    if (VAR_3 == ((void*)0)) {

     VAR_14 = (VAR_6->lists_of_friends)[VAR_12];
     do {
      if ((VAR_10 == FUNC_3(VAR_14))
        && (VAR_8 == FUNC_1(VAR_14))) {
       if (VAR_1 == VAR_2) {
        VAR_11 += 16;
        VAR_2 = FUNC_6(VAR_3,VAR_11*sizeof(synctex_node_t *));
        VAR_1 += VAR_2 - VAR_3;
        VAR_3 = VAR_2;
        VAR_2 = VAR_3 + VAR_11*sizeof(synctex_node_t *);
       }
       *(synctex_node_t *)VAR_1 = VAR_14;
       VAR_1 += sizeof(synctex_node_t);
      }
     } while((VAR_14 = FUNC_0(VAR_14)));
    }
   }
   VAR_2 = VAR_1;

   if ((VAR_3) && (VAR_2))
   {
    synctex_node_t * VAR_15 = (synctex_node_t *)VAR_3;
    synctex_node_t * VAR_16 = (synctex_node_t *)VAR_2;
    VAR_16 -= 1;
    while(VAR_15 < VAR_16) {
     VAR_14 = *VAR_15;
     *VAR_15 = *VAR_16;
     *VAR_16 = VAR_14;
     VAR_15 += 1;
     VAR_16 -= 1;
    }



    VAR_15 = (synctex_node_t *)VAR_3;
    VAR_16 = (synctex_node_t *)VAR_3;
  next_end:
    VAR_16 += 1;
    if (VAR_16 < (synctex_node_t *)VAR_2) {
     VAR_14 = *VAR_16;
     while((VAR_14 = FUNC_2(VAR_14))) {
      if (FUNC_2(*VAR_15) == VAR_14) {
       goto next_end;
      }
     }
     VAR_15 += 1;
     *VAR_15 = *VAR_16;
     goto next_end;
    }
    VAR_15 += 1;
                VAR_2 = (char *)VAR_15;
                VAR_1 = ((void*)0);
    return (VAR_2-VAR_3)/sizeof(synctex_node_t);
            }
   VAR_1 = ((void*)0);

  }



  ++VAR_8;

 }
 return 0;
}
