
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flv_output {int output; scalar_t__ file; int last_packet_ts; int active; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct flv_output *VAR_0, int VAR_1)
{
 FUNC_4(&VAR_0->active, 0);

 if (VAR_0->file) {
  FUNC_6(VAR_0->file, VAR_0->last_packet_ts,
    FUNC_5(VAR_0->file));

  FUNC_0(VAR_0->file);
 }
 if (VAR_1) {
  FUNC_3(VAR_0->output, VAR_1);
 } else {
  FUNC_2(VAR_0->output);
 }

 FUNC_1("FLV file output complete");
}
