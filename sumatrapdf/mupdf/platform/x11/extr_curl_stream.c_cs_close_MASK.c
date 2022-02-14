
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curlstate {int kill_thread; struct curlstate* map; struct curlstate* buffer; int easy; int mutex; int thread; } ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct curlstate*) ;
 int FUNC_4 (struct curlstate*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct curlstate*) ;

__attribute__((used)) static void FUNC_8(fz_context *VAR_1, void *VAR_2)
{
 struct curlstate *VAR_3 = VAR_2;

 FUNC_4(VAR_3);
 VAR_3->kill_thread = 1;
 FUNC_7(VAR_3);






 FUNC_5(VAR_3->thread, ((void*)0));
 FUNC_6(&VAR_3->mutex);


 FUNC_2(VAR_3->easy);
 FUNC_3(VAR_1, VAR_3->buffer);
 FUNC_3(VAR_1, VAR_3->map);
 FUNC_3(VAR_1, VAR_3);
}
