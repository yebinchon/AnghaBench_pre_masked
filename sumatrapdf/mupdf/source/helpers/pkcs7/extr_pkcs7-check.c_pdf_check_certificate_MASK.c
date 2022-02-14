
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;
typedef enum pdf_signature_error { ____Placeholder_pdf_signature_error } pdf_signature_error ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

enum pdf_signature_error FUNC_1(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3)
{
 FUNC_0(VAR_1, VAR_0, "No OpenSSL support.");
 return 0;
}
