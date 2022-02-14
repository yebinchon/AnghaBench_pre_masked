
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctf_writer {int stream_cnt; int * stream; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(struct ctf_writer *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->stream_cnt; VAR_1++)
  FUNC_0(VAR_0->stream[VAR_1]);

 FUNC_1(&VAR_0->stream);
}
