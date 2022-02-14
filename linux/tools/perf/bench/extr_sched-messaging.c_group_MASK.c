
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sender_context {unsigned int num_packets; int* in_fds; int ready_out; int wakefd; int* out_fds; unsigned int num_fds; } ;
struct receiver_context {unsigned int num_packets; int* in_fds; int ready_out; int wakefd; int* out_fds; unsigned int num_fds; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sender_context*,void*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int*) ;
 struct sender_context* FUNC_4 (int) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_5(pthread_t *VAR_5,
  unsigned int VAR_6,
  int VAR_7,
  int VAR_8)
{
 unsigned int VAR_9;
 struct sender_context *VAR_10 = FUNC_4(sizeof(struct sender_context)
   + VAR_6 * sizeof(int));

 if (!VAR_10)
  FUNC_2(VAR_0, "malloc()");

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  int VAR_11[2];
  struct receiver_context *VAR_12 = FUNC_4(sizeof(*VAR_12));

  if (!VAR_12)
   FUNC_2(VAR_0, "malloc()");



  FUNC_3(VAR_11);

  VAR_12->num_packets = VAR_6 * VAR_1;
  VAR_12->in_fds[0] = VAR_11[0];
  VAR_12->in_fds[1] = VAR_11[1];
  VAR_12->ready_out = VAR_7;
  VAR_12->wakefd = VAR_8;

  VAR_5[VAR_9] = FUNC_1(VAR_12, (void *)VAR_2);

  VAR_10->out_fds[VAR_9] = VAR_11[1];
  if (!VAR_4)
   FUNC_0(VAR_11[0]);
 }


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_10->ready_out = VAR_7;
  VAR_10->wakefd = VAR_8;
  VAR_10->num_fds = VAR_6;

  VAR_5[VAR_6+VAR_9] = FUNC_1(VAR_10, (void *)VAR_3);
 }


 if (!VAR_4)
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   FUNC_0(VAR_10->out_fds[VAR_9]);


 return VAR_6 * 2;
}
