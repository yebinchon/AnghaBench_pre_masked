
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
typedef int UZLIB_TREE ;
struct TYPE_5__ {int (* recall_byte ) (void*) ;void* curLen; int (* put_byte ) (int) ;void* lzOffs; int * distBase; int * distBits; int * lengthBase; int * lengthBits; } ;
typedef TYPE_1__ UZLIB_DATA ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 void* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (UZLIB_DATA *VAR_2, UZLIB_TREE *VAR_3, UZLIB_TREE *VAR_4) {
  if (VAR_2->curLen == 0) {
    int VAR_5;
    int VAR_6 = FUNC_1(VAR_2, VAR_3);


    if (VAR_6 < 256) {
       FUNC_0("huff sym: %02x   %c\n", VAR_6, VAR_6);
       VAR_2->put_byte(VAR_6);
       return VAR_1;
    }


    if (VAR_6 == 256)
       return VAR_0;


    VAR_6 -= 257;

    VAR_2->curLen = FUNC_2(VAR_2, VAR_2->lengthBits[VAR_6], VAR_2->lengthBase[VAR_6]);
    VAR_5 = FUNC_1(VAR_2, VAR_4);

    VAR_2->lzOffs = FUNC_2(VAR_2, VAR_2->distBits[VAR_5], VAR_2->distBase[VAR_5]);
    FUNC_0("huff dict: -%u for %u\n", VAR_2->lzOffs, VAR_2->curLen);
  }


  uchar VAR_7 = VAR_2->recall_byte(VAR_2->lzOffs);
  FUNC_0("huff dict byte(%u): -%u -  %02x   %c\n\n",
          VAR_2->curLen, VAR_2->lzOffs, VAR_7, VAR_7);
  VAR_2->put_byte(VAR_7);
  VAR_2->curLen--;
  return VAR_1;
}
