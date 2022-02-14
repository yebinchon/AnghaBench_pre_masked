
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zend_stream_reader_t ;
struct TYPE_5__ {int * closer; scalar_t__ isatty; int * fsizer; scalar_t__ reader; int * handle; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
struct TYPE_7__ {char* filename; char* buf; size_t len; int type; TYPE_2__ handle; int * opened_path; scalar_t__ free_filename; } ;
typedef TYPE_3__ zend_file_handle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;

int FUNC_1(char *VAR_2, char *VAR_3, size_t VAR_4)
{
 zend_file_handle VAR_5;
 VAR_5.filename = VAR_2;
 VAR_5.free_filename = 0;
 VAR_5.opened_path = ((void*)0);
 VAR_5.handle.stream.handle = ((void*)0);
 VAR_5.handle.stream.reader = (zend_stream_reader_t)VAR_1;
 VAR_5.handle.stream.fsizer = ((void*)0);
 VAR_5.handle.stream.isatty = 0;
 VAR_5.handle.stream.closer = ((void*)0);
 VAR_5.buf = VAR_3;
 VAR_5.len = VAR_4;
 VAR_5.type = VAR_0;

 return FUNC_0(&VAR_5, VAR_2);
}
