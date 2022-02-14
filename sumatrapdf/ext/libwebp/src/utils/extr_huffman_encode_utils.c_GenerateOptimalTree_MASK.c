
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ total_count_; int value_; int pool_index_left_; int pool_index_right_; } ;
typedef TYPE_1__ HuffmanTree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int* const,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(const uint32_t* const VAR_1,
                                int VAR_2,
                                HuffmanTree* VAR_3, int VAR_4,
                                uint8_t* const VAR_5) {
  uint32_t VAR_6;
  HuffmanTree* VAR_7;
  int VAR_8 = 0;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
    if (VAR_1[VAR_9] != 0) {
      ++VAR_8;
    }
  }

  if (VAR_8 == 0) {
    return;
  }

  VAR_7 = VAR_3 + VAR_8;





  FUNC_1(VAR_8 <= (1 << (VAR_4 - 1)));
  for (VAR_6 = 1; ; VAR_6 *= 2) {
    int VAR_10 = VAR_8;


    int VAR_11 = 0;
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
      if (VAR_1[VAR_12] != 0) {
        const uint32_t VAR_13 =
            (VAR_1[VAR_12] < VAR_6) ? VAR_6 : VAR_1[VAR_12];
        VAR_3[VAR_11].total_count_ = VAR_13;
        VAR_3[VAR_11].value_ = VAR_12;
        VAR_3[VAR_11].pool_index_left_ = -1;
        VAR_3[VAR_11].pool_index_right_ = -1;
        ++VAR_11;
      }
    }


    FUNC_3(VAR_3, VAR_10, sizeof(*VAR_3), VAR_0);

    if (VAR_10 > 1) {
      int VAR_14 = 0;
      while (VAR_10 > 1) {
        uint32_t VAR_15;
        VAR_7[VAR_14++] = VAR_3[VAR_10 - 1];
        VAR_7[VAR_14++] = VAR_3[VAR_10 - 2];
        VAR_15 = VAR_7[VAR_14 - 1].total_count_ +
                VAR_7[VAR_14 - 2].total_count_;
        VAR_10 -= 2;
        {

          int VAR_16;
          for (VAR_16 = 0; VAR_16 < VAR_10; ++VAR_16) {
            if (VAR_3[VAR_16].total_count_ <= VAR_15) {
              break;
            }
          }
          FUNC_2(VAR_3 + (VAR_16 + 1), VAR_3 + VAR_16, (VAR_10 - VAR_16) * sizeof(*VAR_3));
          VAR_3[VAR_16].total_count_ = VAR_15;
          VAR_3[VAR_16].value_ = -1;

          VAR_3[VAR_16].pool_index_left_ = VAR_14 - 1;
          VAR_3[VAR_16].pool_index_right_ = VAR_14 - 2;
          VAR_10 = VAR_10 + 1;
        }
      }
      FUNC_0(&VAR_3[0], VAR_7, VAR_5, 0);
    } else if (VAR_10 == 1) {
      VAR_5[VAR_3[0].value_] = 1;
    }

    {

      int VAR_17 = VAR_5[0];
      for (VAR_12 = 1; VAR_12 < VAR_2; ++VAR_12) {
        if (VAR_17 < VAR_5[VAR_12]) {
          VAR_17 = VAR_5[VAR_12];
        }
      }
      if (VAR_17 <= VAR_4) {
        break;
      }
    }
  }
}
