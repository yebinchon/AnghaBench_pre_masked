
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct tpacket_req {int tp_block_size; int tp_frame_size; int tp_block_nr; int tp_frame_nr; } ;
typedef int req ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int,int,int ,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int ,int ,void*,int) ;

__attribute__((used)) static char *FUNC_5(int VAR_9)
{
 struct tpacket_req VAR_10 = {
  .tp_block_size = FUNC_1(),
  .tp_frame_size = FUNC_1(),
  .tp_block_nr = VAR_6,
  .tp_frame_nr = VAR_6,
 };
 char *VAR_11;
 int VAR_12 = VAR_8;

 if (FUNC_4(VAR_9, VAR_7, VAR_3, (void *) &VAR_12,
         sizeof(VAR_12))) {
  FUNC_3("packetsock ring setsockopt version");
  FUNC_0(1);
 }
 if (FUNC_4(VAR_9, VAR_7, VAR_2, (void *) &VAR_10,
         sizeof(VAR_10))) {
  FUNC_3("packetsock ring setsockopt");
  FUNC_0(1);
 }

 VAR_11 = FUNC_2(0, VAR_10.tp_block_size * VAR_10.tp_block_nr,
      VAR_4 | VAR_5, VAR_1, VAR_9, 0);
 if (VAR_11 == VAR_0) {
  FUNC_3("packetsock ring mmap");
  FUNC_0(1);
 }

 return VAR_11;
}
