
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int WebPDemuxer ;
struct TYPE_10__ {size_t member_1; int const* const member_0; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_9__ {int size; scalar_t__ bytes; } ;
struct TYPE_11__ {TYPE_1__ chunk; } ;
typedef TYPE_3__ WebPChunkIterator ;
struct TYPE_12__ {int xmp; int exif; int iccp; } ;
typedef TYPE_4__ Metadata ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int *) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int * const) ;
 scalar_t__ FUNC_3 (int * const,char*,int,TYPE_3__*) ;
 int FUNC_4 (int * const,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const uint8_t* const VAR_4, size_t VAR_5,
                           Metadata* const VAR_6) {
  WebPData VAR_7 = { VAR_4, VAR_5 };
  WebPDemuxer* const VAR_8 = FUNC_1(&VAR_7);
  WebPChunkIterator VAR_9;
  uint32_t VAR_10;

  if (VAR_8 == ((void*)0)) return 0;
  FUNC_6(VAR_6 != ((void*)0));

  VAR_10 = FUNC_4(VAR_8, VAR_2);

  if ((VAR_10 & VAR_1) && FUNC_3(VAR_8, "ICCP", 1, &VAR_9)) {
    FUNC_0((const char*)VAR_9.chunk.bytes, VAR_9.chunk.size,
                 &VAR_6->iccp);
    FUNC_5(&VAR_9);
  }
  if ((VAR_10 & VAR_0) && FUNC_3(VAR_8, "EXIF", 1, &VAR_9)) {
    FUNC_0((const char*)VAR_9.chunk.bytes, VAR_9.chunk.size,
                 &VAR_6->exif);
    FUNC_5(&VAR_9);
  }
  if ((VAR_10 & VAR_3) && FUNC_3(VAR_8, "XMP ", 1, &VAR_9)) {
    FUNC_0((const char*)VAR_9.chunk.bytes, VAR_9.chunk.size,
                 &VAR_6->xmp);
    FUNC_5(&VAR_9);
  }
  FUNC_2(VAR_8);
  return 1;
}
