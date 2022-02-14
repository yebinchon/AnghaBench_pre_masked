
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ jvmtiError ;
typedef TYPE_1__* jvmtiEnv ;
typedef int jmethodID ;
typedef int jclass ;
struct TYPE_9__ {scalar_t__ (* GetMethodDeclaringClass ) (TYPE_1__**,int ,int *) ;scalar_t__ (* GetSourceFileName ) (TYPE_1__**,int ,char**) ;scalar_t__ (* GetClassSignature ) (TYPE_1__**,int ,char**,int *) ;int (* Deallocate ) (TYPE_1__**,unsigned char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*,int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__**,char*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__**,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__**,int ,char**) ;
 scalar_t__ FUNC_7 (TYPE_1__**,int ,char**,int *) ;
 int FUNC_8 (TYPE_1__**,unsigned char*) ;
 int FUNC_9 (TYPE_1__**,unsigned char*) ;

__attribute__((used)) static jvmtiError
FUNC_10(jvmtiEnv *VAR_3, jmethodID VAR_4, char ** VAR_5)
{
 jvmtiError VAR_6;
 jclass VAR_7;
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char VAR_10[VAR_2];
 size_t VAR_11;

 VAR_6 = (*VAR_3)->GetMethodDeclaringClass(VAR_3, VAR_4, &VAR_7);
 if (VAR_6 != VAR_0) {
  FUNC_2(VAR_3, "GetMethodDeclaringClass", VAR_6);
  return VAR_6;
 }

 VAR_6 = (*VAR_3)->GetSourceFileName(VAR_3, VAR_7, &VAR_8);
 if (VAR_6 != VAR_0) {
  FUNC_2(VAR_3, "GetSourceFileName", VAR_6);
  return VAR_6;
 }

 VAR_6 = (*VAR_3)->GetClassSignature(VAR_3, VAR_7, &VAR_9, ((void*)0));
 if (VAR_6 != VAR_0) {
  FUNC_2(VAR_3, "GetClassSignature", VAR_6);
  goto free_file_name_error;
 }

 FUNC_0(VAR_9, VAR_8, VAR_10, VAR_2);
 VAR_11 = FUNC_4(VAR_10);
 *VAR_5 = FUNC_1((VAR_11 + 1) * sizeof(char));
 if (!*VAR_5) {
  FUNC_2(VAR_3, "GetClassSignature", VAR_6);
  VAR_6 = VAR_1;
  goto free_class_sign_error;
 }
 FUNC_3(*VAR_5, VAR_10);
 VAR_6 = VAR_0;

free_class_sign_error:
 (*VAR_3)->Deallocate(VAR_3, (unsigned char *)VAR_9);
free_file_name_error:
 (*VAR_3)->Deallocate(VAR_3, (unsigned char *)VAR_8);

 return VAR_6;
}
