
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_6__ {int * datastream; int * controlstream; } ;
typedef TYPE_2__ php_ftp_dirstream_data ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_0, int VAR_1)
{
 php_ftp_dirstream_data *VAR_2 = VAR_0->abstract;


 if (VAR_2->controlstream) {
  FUNC_1(VAR_2->controlstream);
  VAR_2->controlstream = ((void*)0);
 }

 FUNC_1(VAR_2->datastream);
 VAR_2->datastream = ((void*)0);

 FUNC_0(VAR_2);
 VAR_0->abstract = ((void*)0);

 return 0;
}
