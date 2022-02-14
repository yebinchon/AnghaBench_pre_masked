
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int num_symbols; int code_lengths; } ;
typedef TYPE_1__ HuffmanTreeCode ;
typedef int HuffmanTree ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int * const,int const,int * const,int,int ) ;
 int FUNC_2 (int const,int * const,int * const) ;
 int FUNC_3 (int * const,int ,int const) ;

void FUNC_4(uint32_t* const VAR_0, int VAR_1,
                           uint8_t* const VAR_2,
                           HuffmanTree* const VAR_3,
                           HuffmanTreeCode* const VAR_4) {
  const int VAR_5 = VAR_4->num_symbols;
  FUNC_3(VAR_2, 0, VAR_5 * sizeof(*VAR_2));
  FUNC_2(VAR_5, VAR_2, VAR_0);
  FUNC_1(VAR_0, VAR_5, VAR_3, VAR_1,
                      VAR_4->code_lengths);

  FUNC_0(VAR_4);
}
