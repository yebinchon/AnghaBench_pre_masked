
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctf_writer {int writer; int stream_class; int clock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ctf_writer*) ;
 int FUNC_4 (struct ctf_writer*) ;
 int FUNC_5 (struct ctf_writer*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ctf_writer *VAR_0)
{
 FUNC_3(VAR_0);

 FUNC_0(VAR_0->clock);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0->stream_class);
 FUNC_2(VAR_0->writer);


 FUNC_5(VAR_0, 0, sizeof(*VAR_0));
}
