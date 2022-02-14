
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_11__ {size_t smax; TYPE_2__* innerstream; int tmpdir; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_12__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 char* FUNC_6 (TYPE_2__*,size_t*) ;
 int FUNC_7 (TYPE_2__*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_8(php_stream *VAR_3, const char *VAR_4, size_t VAR_5)
{
 php_stream_temp_data *VAR_6 = (php_stream_temp_data*)VAR_3->abstract;
 FUNC_0(VAR_6 != ((void*)0));

 if (!VAR_6->innerstream) {
  return -1;
 }
 if (FUNC_5(VAR_6->innerstream, VAR_2)) {
  size_t VAR_7;
  char *VAR_8 = FUNC_6(VAR_6->innerstream, &VAR_7);

  if (VAR_7 + VAR_5 >= VAR_6->smax) {
   php_stream *VAR_9 = FUNC_3(VAR_6->tmpdir, "php", ((void*)0));
   if (VAR_9 == ((void*)0)) {
    FUNC_1(((void*)0), VAR_0, "Unable to create temporary file, Check permissions in temporary files directory.");
    return 0;
   }
   FUNC_7(VAR_9, VAR_8, VAR_7);
   FUNC_4(VAR_6->innerstream, VAR_1);
   VAR_6->innerstream = VAR_9;
   FUNC_2(VAR_3, VAR_6->innerstream);
  }
 }
 return FUNC_7(VAR_6->innerstream, VAR_4, VAR_5);
}
