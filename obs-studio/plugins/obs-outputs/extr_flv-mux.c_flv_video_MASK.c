
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct serializer {int dummy; } ;
struct encoder_packet {scalar_t__ size; int data; scalar_t__ keyframe; scalar_t__ dts; scalar_t__ pts; } ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct encoder_packet*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct serializer*,int) ;
 int FUNC_3 (struct serializer*,int) ;
 int FUNC_4 (struct serializer*,int) ;
 int FUNC_5 (struct serializer*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct serializer*) ;

__attribute__((used)) static void FUNC_7(struct serializer *VAR_3, int32_t VAR_4,
        struct encoder_packet *VAR_5, bool VAR_6)
{
 int64_t VAR_7 = VAR_5->pts - VAR_5->dts;
 int32_t VAR_8 = FUNC_1(VAR_5, VAR_5->dts) - VAR_4;

 if (!VAR_5->data || !VAR_5->size)
  return;

 FUNC_2(VAR_3, VAR_1);
 FUNC_3(VAR_3, (uint32_t)VAR_5->size + 5);
 FUNC_3(VAR_3, VAR_8);
 FUNC_2(VAR_3, (VAR_8 >> 24) & 0x7F);
 FUNC_3(VAR_3, 0);


 FUNC_2(VAR_3, VAR_5->keyframe ? 0x17 : 0x27);
 FUNC_2(VAR_3, VAR_6 ? 0 : 1);
 FUNC_3(VAR_3, FUNC_1(VAR_5, VAR_7));
 FUNC_5(VAR_3, VAR_5->data, VAR_5->size);


 FUNC_4(VAR_3, (uint32_t)FUNC_6(VAR_3) - 1);
}
