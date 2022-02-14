
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {void* len; int * str; } ;
struct TYPE_5__ {TYPE_1__ filename; int volume_sequence_number; void* file_flags; int recording_time; void* size; void* extent; void* length; } ;
typedef TYPE_2__ iso9660_dir_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (unsigned int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int const*,struct tm*) ;
 int FUNC_6 (struct tm*,int *) ;
 int FUNC_7 (int*,void const*,unsigned int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (char const*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (int) ;
 void* FUNC_12 (int) ;

void
FUNC_13(void *VAR_2,
                         const char VAR_3[],
                         uint32_t VAR_4,
                         uint32_t VAR_5,
                         uint8_t VAR_6,
                         const void *VAR_7,
                         unsigned int VAR_8,
                         const time_t *VAR_9)
{
  iso9660_dir_t *VAR_10 = VAR_2;
  uint8_t *VAR_11 = VAR_2;
  unsigned int VAR_12 = 0;
  uint32_t VAR_13 = FUNC_4(VAR_10->size);
  int VAR_14, VAR_15;
  struct tm VAR_16;
  FUNC_2 (sizeof(iso9660_dir_t) == 33);

  if (!VAR_13 && !VAR_10->length)
    VAR_13 = VAR_0;

  FUNC_2 (VAR_13 > 0 && !(VAR_13 % VAR_0));
  FUNC_2 (VAR_2 != ((void*)0));
  FUNC_2 (VAR_4 > 17);
  FUNC_2 (VAR_3 != ((void*)0));
  FUNC_2 (FUNC_9(VAR_3) <= VAR_1);

  VAR_14 = sizeof(iso9660_dir_t);
  VAR_14 += FUNC_9(VAR_3);
  VAR_14 = FUNC_0 (VAR_14, 2);
  VAR_15 = VAR_14;
  VAR_14 += VAR_8;
  VAR_14 = FUNC_0 (VAR_14, 2);


  {
    unsigned int VAR_17 = 0;

    VAR_12 = 0;
    while (VAR_12 < VAR_13)
      {
        if (!VAR_11[VAR_12])
          {
            VAR_12++;
            continue;
          }

        VAR_12 += VAR_11[VAR_12];
        VAR_17 = VAR_12;
      }

    FUNC_2 (VAR_12 == VAR_13);

    VAR_12 = VAR_17;
  }


  VAR_12 = FUNC_1 (VAR_12, VAR_14, VAR_0);
  VAR_12 -= VAR_14;

  FUNC_2 (VAR_12 + VAR_14 <= VAR_13);

  VAR_10 = (iso9660_dir_t *) &VAR_11[VAR_12];

  FUNC_2 (VAR_12+VAR_14 < VAR_13);

  FUNC_8(VAR_10, 0, VAR_14);

  VAR_10->length = FUNC_10(VAR_14);
  VAR_10->extent = FUNC_12(VAR_4);
  VAR_10->size = FUNC_12(VAR_5);

  FUNC_5(VAR_9, &VAR_16);
  FUNC_6 (&VAR_16, &(VAR_10->recording_time));

  VAR_10->file_flags = FUNC_10(VAR_6);

  VAR_10->volume_sequence_number = FUNC_11(1);

  VAR_10->filename.len = FUNC_10(FUNC_9(VAR_3)
                             ? FUNC_9(VAR_3) : 1);

  FUNC_7(&VAR_10->filename.str[1], VAR_3, FUNC_3(VAR_10->filename.len));
  if (VAR_8 > 0 && VAR_7)
    FUNC_7(&VAR_11[VAR_12] + VAR_15, VAR_7, VAR_8);
}
