
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int da; int * array; } ;
struct update_info {TYPE_1__ file_data; int param; int (* callback ) (int ,struct file_download_data*) ;int url; int curl; } ;
struct TYPE_4__ {int da; } ;
struct file_download_data {TYPE_2__ buffer; scalar_t__ version; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct update_info*,int ,long*) ;
 int FUNC_2 (int ,struct file_download_data*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_0)
{
 struct update_info *VAR_1 = VAR_0;
 struct file_download_data VAR_2;
 long VAR_3;

 VAR_1->curl = FUNC_0();
 if (!VAR_1->curl) {
  FUNC_3("Could not initialize Curl");
  return ((void*)0);
 }

 if (!FUNC_1(VAR_1, VAR_1->url, &VAR_3))
  return ((void*)0);
 if (!VAR_1->file_data.array || !VAR_1->file_data.array[0])
  return ((void*)0);

 VAR_2.name = VAR_1->url;
 VAR_2.version = 0;
 VAR_2.buffer.da = VAR_1->file_data.da;
 VAR_1->callback(VAR_1->param, &VAR_2);
 VAR_1->file_data.da = VAR_2.buffer.da;
 return ((void*)0);
}
