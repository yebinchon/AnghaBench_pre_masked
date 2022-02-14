
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {struct TYPE_5__* buf; } ;
typedef TYPE_1__ RIOGzip ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(RIODesc *VAR_0) {
 RIOGzip *VAR_1;
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 VAR_1 = VAR_0->data;
 FUNC_0 (VAR_1->buf);
 FUNC_0 (VAR_0->data);
 FUNC_1 ("TODO: Writing changes into gzipped files is not yet supported\n");
 return 0;
}
