
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int (* complete ) (struct urb*) ;struct ua101* context; } ;
struct ua101 {int alsa_capture_wait; int states; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct ua101 *VAR_2 = VAR_1->context;

 VAR_1->complete = FUNC_0;
 FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_2->states);
 FUNC_2(&VAR_2->alsa_capture_wait);
}
